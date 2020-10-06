package Java;

/**
 * @author Alessandro Arosio - 06/10/2020 16:38
 */
public class CalculateArea {

    public static void main(String[] args) {
        GeometricShape shape1 = new GeometricShape(Shape.CIRCLE, 6d, null);
        GeometricShape shape2 = new GeometricShape(Shape.RECTANGLE, 3d, 4d);
        GeometricShape shape3 = new GeometricShape(Shape.SQUARE, 7d, null);

        printArea(shape1);
        printArea(shape2);
        printArea(shape3);
    }

    private static void printArea(GeometricShape shape) {
        switch (shape.getShape()) {
            case CIRCLE -> System.out.println(calculateCircleArea(shape.getX()));
            case RECTANGLE -> System.out.println(calculateRectangleArea(shape.getX(), shape.getY()));
            case SQUARE -> System.out.println(calculateSquareArea(shape.getX()));
        }
    }

    private static Double calculateCircleArea(Double radius) {
        return Math.PI * (radius * radius);
    }

    private static Double calculateRectangleArea(Double x, Double y) {
        return x * y;
    }

    private static Double calculateSquareArea(Double base) {
        return base * base;
    }

    private enum Shape {
        CIRCLE,
        RECTANGLE,
        SQUARE
    }

    private static class GeometricShape {
        private final CalculateArea.Shape shape;
        private final Double x;
        private final Double y;

        public GeometricShape(Shape shape, Double x, Double y) {
            this.shape = shape;
            this.x = x;
            this.y = y;
        }

        public Shape getShape() {
            return shape;
        }

        public Double getX() {
            return x;
        }

        public Double getY() {
            return y;
        }
    }
}
