package utn;

//defino la clase Persona
public class Persona {

	// atributos de la clase Persona
	String nombre;
	String apellido;
	String estadoCivil;
	int edad;
	int anioNacimiento;
	long dni;

	// Ejercicio definir los metodos caminar, correr ,estudiar y
	// hacerTrabajosPracticos
	// luego invocarlos dentro del main a traves de los objetos p1 y p2

	// Metodos

	void caminar(String lugar) {
		System.out.println("Soy " + nombre + apellido + " y sali a caminar por " + lugar);
	}

	void correr() {
		System.out.println("Soy " + nombre + apellido + " y sali a correr.");
	}

	void estudiar(String materia) {
		System.out.println("Estoy " + estadoCivil + " y por eso me puse a estudiar " + materia);
		;
	}

	void hacerTrabajosPracticos(int cantidadDeTps) {
		System.out.println("hoy me toco realizar los " + cantidadDeTps + " trabajos practicos.");
	}

}
