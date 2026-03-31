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
            set
            {
                people = value;
                OnPropertyChanged();
            }
        }

        private Person selectedItem;

        public Person SelectedItem
        {
            get { return selectedItem; }
            set
            {
                selectedItem = value;
                OnPropertyChanged();
            }
        }


        public MainPage()
        {

            InitializeComponent();
        }

        private void Reloud(object? sender, EventArgs e)
        {
            People = peopleRepository.GetAllPeople();
            
        }

    }
}
