using System;

namespace Toph
{
    class AsciiProgressBar
    {
        static void Main(string[] args)
        {
            double input = Double.Parse(Console.ReadLine());
            int pluses = (int)(input / 10);

            string bar = "[";
            for (int i = 0; i != pluses; ++i)
                bar += '+';
            for (int t = 0; t != 10 - pluses; ++t)
                bar += '.';
            bar += ']';
            Console.WriteLine($"{bar} {(int)input}%");
        }
    }
}
