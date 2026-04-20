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

        private bool buttonEnabled;

        public bool ButtonEnabled
        {
            get { return buttonEnabled; }
            set { buttonEnabled = value; OnPropertyChanged(); }
        }

        private Answer? selectedAnswer;

        public Answer SelectedAnswer
        {
            get { return selectedAnswer; }
            set { selectedAnswer = value; }
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
                        }
                        );
                return nextQuestion;
            }
        }

        private Command? checkAnswer = null;
        public Command CheckAnswer
        {
           /* tu robisz dalej */
        }


        private QuizRepository quizRepository;
        public MainVievModelQuiz()
        {
            quizRepository = new QuizRepository();
            CurentAnswers = new ObservableCollection<Answer>();
            ChangeQuestion(0);
        }

        private void ChangeQuestion(int id)
        {
            CurentAnswers.Clear();
            QuestionDto questionDto = quizRepository.GetNextQuestion(id);
            if (questionDto != null)
            {
                CurentQuestion = new Question { Id = questionDto.Id, Text = questionDto.QuestionText };
                ButtonEnabled = true;
                List<AnswerDto> answerDtos = quizRepository.GetAnswers(CurentQuestion.Id);
                foreach (AnswerDto answerDto in answerDtos)
                {
                    CurentAnswers.Add(new Answer { Text = answerDto.Text, IsCorect = answerDto.IsCorect });
                }

            }
            else
            {
                CurentQuestion = new Question { Text = "Koniec pytan" };
                ButtonEnabled = false;
            }
        }
    }
}
