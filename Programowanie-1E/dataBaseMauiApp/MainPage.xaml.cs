using PeopleRepositoryClassLibrary;
using PeopleRepositoryClassLibrary.Models;

namespace dataBaseMauiApp
{

    public partial class MainPage : ContentPage
    {
        PeopleRepository peopleRepository = new PeopleRepository();
        private List<Person> people;

        public List<Person> People
        {
            get { return people; }
            set { people = peopleRepository.GetAllPeople(); }
        }


        public MainPage()
        {
            InitializeComponent();
        }

        private void OnCounterClicked(object? sender, EventArgs e)
        {
            List<Person> list = new List<Person>();
            

        }
        
    }
}
