using Microsoft.EntityFrameworkCore;
using QuizDB;
using QuizDB.Models;

namespace QuizDB
{
    public class QuizRepository
    {

        private QuizDB context; 

        public QuizRepository()
        {
            context = new QuizDB();
        }
        
        public List<Question> GetQuestion()
        {
            return context.Questions
                .AsNoTracking()
                .Include(p => p.Answers)
                .OrderBy(p => p.Id)
                .ToList();
        }

    }

}
