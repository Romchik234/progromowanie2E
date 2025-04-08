using System.Reflection.Metadata;

StreamReader file = new("C:\\Romchik Khazov\\progromowanie2E\\Programowanie-1E\\przyklad2022czerwiec.txt");
List<string> numbersFromFile = new();
string? numberFromFile;

while ((numberFromFile = file.ReadLine()) != null)
{
    numbersFromFile.Add(numberFromFile);
}
file.Close();

//zadanie 4. 
Console.WriteLine("Zadanie 4.");

foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);
    int rest;
    int reflection = 0;
    while (number > 0)
    {
        rest = number % 10;
        reflection = reflection * 10 + rest;

        number = number / 10;
    }
    Console.WriteLine(reflection);
}

//zadanie 4.1 
Console.WriteLine("Zadanie 4.1");

foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);
    int rest;
    int reflection = 0;
    while (number > 0)
    {
        rest = number % 10;
        reflection = reflection * 10 + rest;

        number = number / 10;
    }
    if (reflection % 17 == 0)
        Console.WriteLine(reflection);
}

//zadanie 4.2