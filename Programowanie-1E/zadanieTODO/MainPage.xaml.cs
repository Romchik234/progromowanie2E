using System.Collections.ObjectModel;

namespace zadanieTODO
{
    public partial class MainPage : ContentPage
    {
        public class Zadanie
        {
            public required string Title { get; set; }
            public bool IsComplite { get; set; }
        }
     
        public ObservableCollection<Zadanie> ZadanieCollection { get; set; }
   
        public MainPage()
        {
            InitializeComponent();




            ZadanieCollection = new ObservableCollection<Zadanie>()
            {
                new Zadanie() { Title = "Cos tam cos tam", IsComplite = true},
                new Zadanie() { Title = "tam cos cos tam", IsComplite = false},
            };


        }
    }
}
