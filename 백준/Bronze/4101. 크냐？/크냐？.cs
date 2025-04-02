
using System.Numerics;

internal class Program
{
    static List<int> results = new();
    static bool isLoop = true;
    static void Main(string[] args)
    {
        while (isLoop)
        {
            TestCase();
        }
    }
    
    private static void TestCase()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        if (int.Parse(inputs[0]) == 0 && int.Parse(inputs[0]) == 0)
        {
            isLoop = false;
            return;
        }
        Console.WriteLine(int.Parse(inputs[0]) > int.Parse(inputs[1]) ? "Yes" : "No");
    }
}