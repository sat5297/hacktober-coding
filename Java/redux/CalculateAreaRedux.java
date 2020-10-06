package Java.redux;

import Java.redux.shape.Circle;
import Java.redux.shape.Rectangle;
import Java.redux.shape.Shape;
import Java.redux.shape.Square;

import java.util.List;

/**
 * @author Alessandro Arosio - 06/10/2020 17:02
 */
public class CalculateAreaRedux {
    public static void main(String[] args) {
        Shape circle = new Circle(5d, "Circle");
        Shape rectangle = new Rectangle(3d, 4d, "Rectangle");
        Shape square = new Square(8d, "Square");

        List<Shape> shapes = List.of(circle, square, rectangle);

        shapes.forEach(element -> System.out.println("Area of " + element.getName() + " : " + element.getArea()));
    }
}
