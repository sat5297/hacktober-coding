package Java.redux.shape;

/**
 * @author Alessandro Arosio - 06/10/2020 17:06
 */
public class Circle implements Shape {
    private final Double radius;
    private final String name;

    public Circle(Double radius, String name) {
        this.radius = radius;
        this.name = name;
    }

    @Override
    public Double getArea() {
        return Math.PI * (radius * radius);
    }

    @Override
    public String getName() {
        return this.name;
    }
}
