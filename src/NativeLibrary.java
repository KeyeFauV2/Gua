// src/NativeLibrary.java
public class NativeLibrary {
    public static void Console_print(String message) {
        System.out.println("[INFO] " + message);
    }
    public static void Console_warn(String message) {
        System.out.println("[WARN] " + message);
    }

    public static void Console_error(String message) {
        System.err.println("[ERROR] " + message);
    }

    public static void Console_debug(String message) {
        System.out.println("[DEBUG] " + message);
    }

    // Ajouter d'autres méthodes natives si nécessaire
}
