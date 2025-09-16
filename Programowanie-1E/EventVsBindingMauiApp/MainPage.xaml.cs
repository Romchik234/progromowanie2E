namespace EventVsBindingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string Message { get; set; }

        private string returnMessage;

        public string ReturnMessage
        {
            get { return returnMessage; }
            set
            {
                returnMessage = value;
                OnPropertyChanged();
            }
        }



        public MainPage()
        {
            InitializeComponent();
        }


        private void sliderFrom_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            labelRotation.Rotation = sliderFrom.Value;
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            ReturnMessage = "Ilość znaków " + Message.Length;
        }
    }
}
