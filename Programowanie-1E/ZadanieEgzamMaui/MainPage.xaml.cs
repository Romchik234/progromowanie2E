namespace ZadanieEgzamMaui
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }
        private string result;

        public string Result
        {
            get { return result; }
            set
            {
                result = value; OnPropertyChanged();
            }
        }
        public string Email { get; set; }
        public string Password { get; set; }
        public string CheckPassword { get; set; }



        private void Button_Clicked(object sender, EventArgs e)
        {
            if (Email.Contains('@') == false)
            {
                Result = "Nie prawidłowe danne!";
                return;
            }

            if (Password == CheckPassword)
            {
                Result = "Cześć " + Email;
            }
        }
    }
}
