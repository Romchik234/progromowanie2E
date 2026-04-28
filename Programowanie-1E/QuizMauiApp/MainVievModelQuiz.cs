using QuizDB;
using QuizDB.Dtos;
using QuizMauiApp.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuizMauiApp
{
    internal class MainVievModelQuiz : BindableObject
    {
        
        private Question? curentQuestion;

        public Question CurentQuestion
        {
            get { return curentQuestion; }
            set { curentQuestion = value; OnPropertyChanged(); }
        }

        private bool isQuizInProgres;

        public bool IsQuizInProgres
        {
            get { return isQuizInProgres; }
            set { isQuizInProgres = value; OnPropertyChanged(); }
        }

        private Answer? selectedAnswer;

        public Answer SelectedAnswer
        {
            get { return selectedAnswer; }
            set { selectedAnswer = value; OnPropertyChanged(); }
        }

        private int corectCounter;

        public int CorectCounter
        {
            get { return corectCounter; }
            set { corectCounter = value; OnPropertyChanged(); }
        }

        private bool isntAnswerd;

        public bool IsntAnswerd
        {
            get { return isntAnswerd; }
            set { isntAnswerd = value; OnPropertyChanged(); }
        }

        private int numberOfQ;

        public int NumberOfQ
        {
            get { return numberOfQ; }
            set { numberOfQ = value; OnPropertyChanged(); }
        }



        public ObservableCollection<Answer> CurentAnswers { get; set; }

        private Command? nextQuestion = null;
        public Command NextQuestion
        {
            get
            {
                if (nextQuestion == null)
                    nextQuestion = new Command(
                        () =>
                        {
                            ChangeQuestion(curentQuestion.Id);
                            IsntAnswerd = true;

                            if (selectedAnswer != null && selectedAnswer.IsCorect == true)
                            {
                                CorectCounter++;
                            }

                            NumberOfQ++; 
                        }
                        );
                return nextQuestion;
            }
        }

        private Command? checkAnswer = null;
        public Command CheckAnswer
        {
            get
            {
                if (checkAnswer == null)
                    checkAnswer = new Command(
                        () =>
                        {
                            if (!isntAnswerd)
                                return;

                            IsntAnswerd = false;
                            if (selectedAnswer != null)
                            {
                                SelectedAnswer.Color = "Red";

                            }


                            CurentAnswers.First(a => a.IsCorect).Color = "Green";
                            if (selectedAnswer != null && selectedAnswer.IsCorect == true)
                            {
                                CorectCounter++;
                            }
                        }
                        );
                return checkAnswer;
            }

        }


        private QuizRepository quizRepository;
        public MainVievModelQuiz()
        {
            quizRepository = new QuizRepository();
            CurentAnswers = new ObservableCollection<Answer>();
            CorectCounter = 0;
            isntAnswerd = true;
            NumberOfQ = 1; 
            ChangeQuestion(0);
        }

        private void ChangeQuestion(int id)
        {


            CurentAnswers.Clear();
            QuestionDto ?questionDto = quizRepository.GetNextQuestion(id);
            if (questionDto != null)
            {
                CurentQuestion = new Question { Id = questionDto.Id, Text = questionDto.QuestionText };
                IsQuizInProgres = true;
                List<AnswerDto> answerDtos = quizRepository.GetAnswers(CurentQuestion.Id);
                foreach (AnswerDto answerDto in answerDtos)
                {
                    CurentAnswers.Add(new Answer { Text = answerDto.Text, IsCorect = answerDto.IsCorect, Color = "Black" });
                }

            }
            else
            {
                CurentQuestion = new Question { Text = "Koniec pytan" };
                IsQuizInProgres = false;
                NumberOfQ --;
            }
        }
    }
}
