public class Test {

    public static void main(String[] args) {
        int a = 5;
        System.out.println(a);
        changeValue(a);
        System.out.println(a);
        a = changeAndReturnValue(a);
        System.out.println(a);
    }

    private static void changeValue(int variable) {
        variable += 10;
        System.out.println(variable);
    }
    
    private static int changeAndReturnValue(int variable) {
        return variable + 10;
    }
}