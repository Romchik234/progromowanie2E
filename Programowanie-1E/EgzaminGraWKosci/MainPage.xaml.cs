using System.Collections.ObjectModel;

namespace EgzaminGraWKosci
{
    public partial class MainPage : ContentPage
    {
        public  ObservableCollection<int> ResultOfThrows{ get; set; }


        public MainPage()
        {
            ResultOfThrows = new ObservableCollection<int>();
            for (int i = 0; i < 5; i++)
            {
                ResultOfThrows.Add(0);
            }


            InitializeComponent();
        }

    }
}
