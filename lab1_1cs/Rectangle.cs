

namespace lab1_1cs {

    public class Rectangle {
        private double x1, y1, x2, y2;

        public Rectangle(double x1, double y1, double x2, double y2) {
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
        }

        public double Width {
            get { return Math.Abs(x2 - x1); }
        }

        public double Height {
            get { return Math.Abs(y2 - y1); }
        }

        public double Area() {
            return Width * Height;
        }

        public double Perimeter() {
            return 2 * (Width + Height);
        }
    }
}