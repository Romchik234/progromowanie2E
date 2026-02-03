using System.Collections.ObjectModel;

namespace EgzaminGraWKosci
{
    public partial class MainPage : ContentPage
    {
        public  ObservableCollection<int> ResultOfThrows{ get; set; }


        public MainPage()
        {
            Random randomNumber = new Random();  
            ResultOfThrows = new ObservableCollection<int>();
            for (int i = 0; i < 5; i++)
            {
                ResultOfThrows.Add(randomNumber.Next(1, 7));
            }


            InitializeComponent();
        }

    }
}
