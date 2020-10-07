package Java.redux.shape;

/**
 * @author Alessandro Arosio - 06/10/2020 17:09
 */
public class Square implements Shape {
    private final Double base;
    private final String name;

    public Square(Double base, String name) {
        this.base = base;
        this.name = name;
    }

    @Override
    public Double getArea() {
        return base * base;
    }

    @Override
    public String getName() {
        return this.name;
    }
}
