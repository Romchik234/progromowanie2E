namespace ZadanieEgzaminacyjne2022Maui
{
    public partial class MainPage : ContentPage
    {

        public MainPage()
        {
            InitializeComponent();
        }

        private int counter;

        public int Counter
        {
            get { return counter; }
            set { counter = value;
                OnPropertyChanged();
            }
                
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            Counter++; 
        }
    }
}

