using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuizMauiApp.Models
{
    class Answer : BindableObject
    {
        public string Text { get; set; }
        public bool IsCorect { get; set; }
    }
}
