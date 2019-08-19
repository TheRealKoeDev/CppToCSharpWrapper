using CLI;
using System;

namespace CSharpConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
           CLI.EntityWrapper wr = new EntityWrapper("", 100, 100);
            //Entity e = new Entity("The Wallman", 20, 35);
            
            //e.Move(5, -10);
            //Console.WriteLine(e.XPosition + " " + e.YPosition);
            Console.Read();
        }
    }
}
