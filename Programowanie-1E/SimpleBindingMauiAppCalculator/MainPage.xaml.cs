namespace SimpleBindingMauiAppCalculator
{
    public partial class MainPage : ContentPage
    {
        public string FirstNumber { get; set; }

        public string SecondNumber { get; set; }

        private int result;

        public int Result
        {
            get { return result; }
            set
            {
                result = value;
                OnPropertyChanged();
            }
        }


        public MainPage()
        {
            InitializeComponent();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            int first; 
            int second;
            if (int.TryParse(FirstNumber, out first) 
                && int.TryParse(SecondNumber, out second))
            {
                Result = (first + second);
            }
        }
    }
}
