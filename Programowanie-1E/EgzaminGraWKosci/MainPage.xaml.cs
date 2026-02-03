using System.Collections.ObjectModel;

namespace EgzaminGraWKosci
{
    public partial class MainPage : ContentPage
    {
        public  ObservableCollection<int> ResultOfThrows{ get; set; }

        private int myVresultOfCurrentThrowar;

        public int ResultOfCurrentThrow
        {
            get { return myVresultOfCurrentThrowar; }
            set { myVresultOfCurrentThrowar = value; OnPropertyChanged();  }
        }

        private int sumOfAll;

        public int SumOfAll
        {
            get { return sumOfAll; }
            set { sumOfAll = value; OnPropertyChanged(); }
        }

        public MainPage()
        {
            ResultOfThrows = new ObservableCollection<int>();
            InitializeComponent();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {

            Random randomNumber = new Random();
            //ResultOfThrows = new ObservableCollection<int>();
            ResultOfThrows.Clear();
            for (int i = 0; i < 5; i++)
            {
                ResultOfThrows.Add(randomNumber.Next(1, 7));
            }
            int[] counters = { 0, 0, 0, 0, 0, 0, 0 };

            foreach (var item in ResultOfThrows)
            {
                counters[item] ++;  
            }
            int sum = 0 ; 
            for (int i = 1; i < counters.Length; i++)
            {
                if (counters[i] > 1)
                {
                    sum += counters[i] * i;  
                }
            }
            ResultOfCurrentThrow = sum; 
           // ResultOfCurrentThrow = ResultOfThrows.GroupBy(n => n ).Where( g => g.Count() > 1).Sum(g => g.Key * g.Count()); 
            SumOfAll += ResultOfCurrentThrow; 
        }

        private void Button_Clicked_1(object sender, EventArgs e)
        {
            SumOfAll = 0; 
        }
    }
}
