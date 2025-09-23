namespace ZadanieEgzamMaui
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        public string Email { get; set; }
        public string Password { get; set; }
        public string CheckPassword { get; set; }

        private string result;

        public string Result
        {
            get { return result; }
            set { result = value;
                OnPropertyChanged();
            }
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            if (Email.Contains('@') == false)
            {
                Result = "źle podałeś danne!";
                return;
            }

            if (Password == CheckPassword)
            {
                Result = "Witaj " + Email;
            }
        }
    }
}
