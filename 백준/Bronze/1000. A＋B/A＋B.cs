
internal class Program
{
    static void Main(string[] args)
    {
        int sum = 0;
        foreach (string s in Console.ReadLine().Split(' '))
        {
            int a = int.Parse(s);
            sum += a;
        }
        Console.WriteLine(sum);
    }
}