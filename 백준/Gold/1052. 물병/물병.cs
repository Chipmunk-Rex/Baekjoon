
internal class Program
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int n = int.Parse(input[0]);
        int k = int.Parse(input[1]);

        Console.WriteLine(calculate(n, k));
    }
    static int calculate(int n, int k)
    {
        k--;
        int t = 1;
        while (n - t > 0)
        {
            t *= 2;
        }
        return k == 0 ? t - n : calculate(n - (t / 2), k); 
    }
}