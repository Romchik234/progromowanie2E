

//PeopleConsoleApp


using PeopleRepositoryClassLibrary;
using PeopleRepositoryClassLibrary.Models;
using System;

/*
   * Pobierz osoby o wieku wiêkszym ni¿ 30 lat.
   * Pobierz osoby, których nazwisko zaczyna siê na „K”.
   * ZnajdŸ osoby z najmniejszym wiekiem.
   * Policz, ile osób jest w tabeli.
   * Zwróæ wszystkie unikalne imiona.
   * Zmieñ nazwisko wszystkich osób o nazwisku „Kowalski” na „Kowal”.
   * Dodaj wszystkim osobom 1 rok (symulacja urodzin).
   * Usuñ wszystkich, którzy maj¹ wiêcej ni¿ 80 lat.
   *  ZnajdŸ najstarsz¹ osobê i zmieñ jej nazwisko na „Najstarszy”.
   * Usuñ osoby m³odsze ni¿ œrednia wieku.
   * Zmieñ imiona na wersjê „WIELKIMI LITERAMI”.


   */

PeopleRepository peopleRepository = new PeopleRepository();

List<Person> people = peopleRepository.GetAllPeople();

Console.WriteLine("Lista wszystkich osób posortowanych po imieniu i nazwisku");
foreach (Person person in people)
{
    Console.WriteLine($"{person.Id} {person.Name} {person.Surname} lat {person.Age}");
}


people = peopleRepository.ageMore30();
Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv--  wieciej 30 lat"); 
foreach (Person person in people)
{
    Console.WriteLine($"{person.Id} {person.Name} {person.Surname} lat {person.Age}");
}

people = peopleRepository.surnameKfirst();
Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv-- nazwisko zaczyna sie na K ");
foreach (Person person in people)
{
    Console.WriteLine($"{person.Id} {person.Name} {person.Surname} lat {person.Age}");
}

people = peopleRepository.osobyNajMniejWiek();
Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv-- orede by wiek ");
foreach (Person person in people)
{
    Console.WriteLine($"{person.Id} {person.Name} {person.Surname} lat {person.Age}");
}

Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv-- ilosc wszystkich osob ");
int number = peopleRepository.countOfPeople();
Console.WriteLine(number);


List<string> uniqueNames = peopleRepository.uniqueNames();
Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv-- unikalne imiona ");
foreach (string name in uniqueNames)
{
    Console.WriteLine($"{name}");
}

peopleRepository.changeSurnameKowalskiTo("Kowal");
people = peopleRepository.GetAllPeople();
Console.WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv-- zmienc nazwiska na kowal lub inne");
foreach (Person person in people)
{
    Console.WriteLine($"{person.Id} {person.Name} {person.Surname} lat {person.Age}");
}

