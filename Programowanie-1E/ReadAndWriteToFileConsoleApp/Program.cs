

//zapisz do pliku 

string name;
int age;
Console.WriteLine("Podaj Imie : ");
name = Console.ReadLine();
Console.WriteLine("Podaj wiek : ");
age = int.Parse(Console.ReadLine());

StreamWriter streamWriter = new StreamWriter("C:\\Romchik Khazov\\progromowanie2E\\Programowanie-1E\\OpachaPlik.txt", true);

streamWriter.WriteLine(name);
streamWriter.Flush(); 
streamWriter.WriteLine(age);

streamWriter.Close();
