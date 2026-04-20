using Microsoft.EntityFrameworkCore;
using QuizDB;
using QuizDB.Models;
using QuizDB.Dtos;

namespace QuizDB
{
    public class QuizRepository
    {

        private QuizDB context; 

        public QuizRepository()
        {
            context = new QuizDB();
        }
        
        public QuestionDto? GetNextQuestion(int id)
        {
            return context.Questions
                .AsNoTracking()
                .OrderBy(p => p.Id)
                .Where(p => p.Id == id+1 )
                .Select(p => new QuestionDto() { Id = p.Id , QuestionText = p.QuestionText})
                .FirstOrDefault();
        }

        public List<AnswerDto> GetAnswers(int questionId)
        {
            return context.Answers
                .AsNoTracking()
                .Where(a => a.QuestionId == questionId)
                .Select(a => new AnswerDto() { Text = a.AnswerText , IsCorect = a.IsCorrect})
                .ToList(); 
        }

    }

}
