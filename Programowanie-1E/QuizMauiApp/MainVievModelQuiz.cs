using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using QuizDB;
using QuizDB.Models;

namespace QuizMauiApp
{
    internal class MainVievModelQuiz : BindableObject
    {
        public ObservableCollection<Question> Questions { get; set; }

       /* private Command? numberOfQ = null;
        
        public Command NumberOfQ
        {
            get {if(numberOfQ == null)
                    numberOfQ = new Command(
                        () =>
                        {
                            Questions.Clear();
                            for
                        }
                        )
        }

        */





    }
}
