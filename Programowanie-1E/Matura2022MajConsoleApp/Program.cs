//matura 2022 maj 


//Dodac do projektu pliki z gihuba 
StreamReader streamReader = new StreamReader("tekst.txt");

string? strNumberFromFile; 
List<string> strNumbersFromFile = new List<string>();

while((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbersFromFile.Add(strNumberFromFile); 
}

streamReader.Close();

//zadanie 4.1

byte counter = 0; 
string? firstFindNumber = null;
foreach (string strNumber in strNumbersFromFile)
{
    if (strNumber[0] == strNumber[strNumber.Length - 1])
    {
        counter ++;
        if (firstFindNumber == null)
        {
            firstFindNumber = strNumber; 
        }
    }
}
Console.WriteLine($"Zadanie 4.1 odp: {counter} {firstFindNumber}");
