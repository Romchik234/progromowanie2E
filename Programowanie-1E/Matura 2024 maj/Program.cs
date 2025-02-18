using System.Reflection.Metadata;

StreamReader document = new("skrot_przyklad.txt");
string? numberFromFile;
List<string> numbersFromFile = new();
while ((numberFromFile = document.ReadLine()) != null)
{
    numbersFromFile.Add(numberFromFile);
}
document.Close();

//zadanie 3.1 - 3.2 

int n = 0;
int m = 0;
int i = 1;
int dontExistNumbers = 0;
int hugestNumber = 0;

foreach (var number in numbersFromFile)
{
    m = 0;
    i = 1;
    n = int.Parse(number);

    while (n > 0)
    {
        int rest = n % 10;

        //if (rest % 2 != 0) flaga 
        if((rest & 1) != 0)
        {
            m += rest * i;
            i *= 10;
        }

        n = n / 10;
    }

    if (m == 0)
    {
        dontExistNumbers++;
        if (int.Parse(number) > hugestNumber)
            hugestNumber = int.Parse(number);
    }

}

Console.WriteLine(dontExistNumbers);
Console.WriteLine(hugestNumber);
Console.WriteLine();
/*StreamWriter plikZodpowiea = new("plikZodpowiea.txt");
plikZodpowiea.WriteLine(dontExistNumbers); 
plikZodpowiea.WriteLine(hugestNumber);
plikZodpowiea.Close(); 
*/

//zadanie 3.3

StreamReader document2 = new("skrot2_przyklad.txt"); 
List<string> numbersFromDocument2 = new();
string? numberFromDocument2;
while((numberFromDocument2 = document2.ReadLine()) != null)
{
    numbersFromDocument2.Add(numberFromDocument2);
    Console.WriteLine(numberFromDocument2);
}
document2.Close();

foreach (var number in numbersFromDocument2)
{
    

}



