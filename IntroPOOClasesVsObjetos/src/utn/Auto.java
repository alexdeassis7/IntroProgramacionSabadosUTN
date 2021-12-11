package utn; // carpeta dentro de mi proyecto que contiene a la clase

//Defino la clase Auto que sera mi plantilla para instanciar objetos del tipo Auto
public class Auto {
	// atributos: definene las caracteristicas de la clase
	int cantidadPuertas;
	float motorCilindrada;
	String color;
	String marca;
	String modelo;

	// metodos: Definen el comportamiento de los objetos
	void arrancar() {
		System.out.println("Estoy arrancando el " + marca);
	}

	void acelerar(int kmXhs) {
		System.out.println("Estoy acelerando el " + marca + " a " + kmXhs + " X Hs.");
	}

	void frenar() {
		System.out.println("Estoy frenando el " + marca);
	}
}
