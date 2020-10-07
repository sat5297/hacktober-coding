package Java.redux.shape;

/**
 * @author Alessandro Arosio - 06/10/2020 17:07
 */
public class Rectangle implements Shape {
    private final Double base;
    private final Double height;
    private final String name;

    public Rectangle(Double base, Double height, String name) {
        this.base = base;
        this.height = height;
        this.name = name;
    }

    @Override
    public Double getArea() {
        return base * height;
    }

    @Override
    public String getName() {
        return this.name;
    }
}
