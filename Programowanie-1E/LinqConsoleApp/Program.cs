using LinqConsoleApp;
using System;
List<Person> people = new List<Person>();


#region Danne do kolekcji 
Person person = new Person();
person.name = "Adam";
person.surname = "Nowak";
person.age = 15;

people.Add(person);

person = new Person();
person.name = "Ewa";
person.surname = "Kowalska";
person.age = 54;

people.Add(person);

person = new Person();
person.name = "Jan";
person.surname = "Nowakowski";
person.age = 30;

people.Add(person);

#endregion

Console.WriteLine("Wszystkie osoby: ");
foreach (Person p in people)
{
    Console.WriteLine($" Imie : {p.name} , Nazwisko: {p.surname} , Wiek : {p.age}");    
}
Console.WriteLine();

/*
    select max(age)
from people
*/

int maxAge = people.Max(p => p.age);
Console.WriteLine($"Najstarsza osoba ma {maxAge} lat ");
Console.WriteLine(); 