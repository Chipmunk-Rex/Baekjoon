

internal class Program
{
    static void Main(string[] args)
    {
        // https://www.acmicpc.net/problem/15667
        int n = int.Parse(Console.ReadLine());
        
        int i = 0;
        int calculatedN = 0;
        while(calculatedN <= 10101)
        {
            i++;
            calculatedN = Calculate(i);
            if(calculatedN == n)
            {
                Console.WriteLine(i);
                return;
            }
        }
    }
    static int Calculate(int k)
    {
        int n = 1;
        n += k;
        n += k * k;

        return n;
    }
}