namespace lab1_1cs {
    class Program {
        static public void Main(String[] args) {
            Rectangle r1 = new Rectangle(0, 0, 5, 10);
            Console.WriteLine($"Coordinates: ({r1.X1}; {r1.Y1}), ({r1.X1}; {r1.Y2}), ({r1.X2}; {r1.Y2}), ({r1.X2}; {r1.Y1})");
            Console.WriteLine("Width: " + r1.Width);
            Console.WriteLine("Height: " + r1.Height);
            Console.WriteLine("Area: " + r1.Area());
            Console.WriteLine("Perimeter: " + r1.Perimeter());
        }
    }
}    
