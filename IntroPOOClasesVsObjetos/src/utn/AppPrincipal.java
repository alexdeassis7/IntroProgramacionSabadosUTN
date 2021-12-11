package utn;

public class AppPrincipal {

	// funcion principal o punto de inicio de ejecucion de la applicacion
	public static void main(String[] args) {
		// mostramos un mensaje por consola
		System.out.println("Hola Mundo JAVA!");

		// instanciamos objetos a partir de la clase Auto
		// nombreDeClase nombreObjeto = new NombreDeClase();
		Auto auto1 = new Auto();
		Auto auto2 = new Auto();

		// mostramos por consola el estado inicial
		// de los atributos del objeto auto1 y auto2
		System.out.println("******************* objeto auto1 *****************");
		System.out.println("marca del auto1 : " + auto1.marca);
		System.out.println("modelo del auto1 : " + auto1.modelo);
		System.out.println("motorCilindrada del auto1 : " + auto1.motorCilindrada);
		System.out.println("color del auto1 : " + auto1.color);
		System.out.println("Cantidad de Puertas del auto1 : " + auto1.cantidadPuertas);

		System.out.println("******************* objeto auto2 *****************");
		System.out.println("marca del auto2 : " + auto2.marca);
		System.out.println("modelo del auto2 : " + auto2.modelo);
		System.out.println("motorCilindrada del auto2 : " + auto2.motorCilindrada);
		System.out.println("color del auto2 : " + auto2.color);
		System.out.println("Cantidad de Puertas del auto2 : " + auto2.cantidadPuertas);

		// modificamos el estado de los atributos del objeto auto1 y auto2
		auto1.cantidadPuertas = 5;
		auto1.motorCilindrada = 3.6f;
		auto1.color = "gris";
		auto1.marca = "Jeep";
		auto1.modelo = "Grand Cherokee";

		auto2.cantidadPuertas = 3;
		auto2.motorCilindrada = 2.0f;
		auto2.color = "negro";
		auto2.marca = "Porche";
		auto2.modelo = "GrandCarrera26";

		System.out.println("SE MODIFICARON LOS ESTADOS INICIALES DE LOS ATRIBUTOS ");

		// mostramos por consola el estado nuevo
		// de los atributos del objeto auto1 y auto2
		System.out.println("******************* objeto auto1 *****************");
		System.out.println("marca del auto1 : " + auto1.marca);
		System.out.println("modelo del auto1 : " + auto1.modelo);
		System.out.println("motorCilindrada del auto1 : " + auto1.motorCilindrada);
		System.out.println("color del auto1 : " + auto1.color);
		System.out.println("Cantidad de Puertas del auto1 : " + auto1.cantidadPuertas);

		System.out.println("******************* objeto auto2 *****************");
		System.out.println("marca del auto2 : " + auto2.marca);
		System.out.println("modelo del auto2 : " + auto2.modelo);
		System.out.println("motorCilindrada del auto2 : " + auto2.motorCilindrada);
		System.out.println("color del auto2 : " + auto2.color);
		System.out.println("Cantidad de Puertas del auto2 : " + auto2.cantidadPuertas);

		// instanciamos objetos a partir de la clase Persona
		// nombreDeClase nombreObjeto = new NombreDeClase();
		Persona p1 = new Persona();
		Persona p2 = new Persona();
		System.out.println("**************** Objetos Persona ***************");
		System.out.println("SE MODIFICARON LOS ESTADOS INICIALES DE LOS ATRIBUTOS ");

		p1.nombre = "Cristian";
		p1.apellido = "Serafini";
		p1.edad = 26;
		p1.dni = 36888777;
		p1.estadoCivil = "Soltero";
		p1.anioNacimiento = 1993;

		p2.nombre = "Natalia";
		p2.apellido = "Fernandez";
		p2.edad = 29;
		p2.dni = 36112743;
		p2.estadoCivil = "Viuda";
		p2.anioNacimiento = 1992;

		// mostramos por consola el estado de los atributos del objeto p1 y p2
		System.out.println("******************* objeto p1 *****************");
		System.out.println("nombre de p1 : " + p1.nombre);
		System.out.println("apellido de p1 :" + p1.apellido);
		System.out.println("edad de p1: " + p1.edad);
		System.out.println("dni de p1 : " + p1.dni);
		System.out.println("estado civil de p1 : " + p1.estadoCivil);
		System.out.println("anio nacimiento de p1 : " + p1.anioNacimiento);

		System.out.println("******************* objeto p2 *****************");
		System.out.println("nombre de p2 : " + p2.nombre);
		System.out.println("apellido de p2 :" + p2.apellido);
		System.out.println("edad de p2: " + p2.edad);
		System.out.println("dni de p2 : " + p2.dni);
		System.out.println("estado civil de p2 : " + p2.estadoCivil);
		System.out.println("anio nacimiento de p2 : " + p2.anioNacimiento);

		// modifico en año de nacimiento de p1
		p1.anioNacimiento = 1996;
		System.out.println("******************* objeto p1 *****************");
		System.out.println("nombre de p1 : " + p1.nombre);
		System.out.println("apellido de p1 :" + p1.apellido);
		System.out.println("edad de p1: " + p1.edad);
		System.out.println("dni de p1 : " + p1.dni);
		System.out.println("estado civil de p1 : " + p1.estadoCivil);
		System.out.println("anio nacimiento de p1 : " + p1.anioNacimiento);

		System.out.println("---------------------- Utilizando Metodos de la Clase Auto ------------------");
		System.out.println("+++++++++++++++++++++++" + auto1.marca + auto1.modelo + "++++++++++++++++++");
		// invoco a los metodos mediante la instancia auto1
		auto1.arrancar();
		auto1.acelerar(196);
		auto1.frenar();
		System.out.println("+++++++++++++++++++++++" + auto2.marca + auto2.modelo + "++++++++++++++++++");
		// invoco a los metodos mediante la instancia auto1
		auto2.arrancar();
		auto2.acelerar(245);
		auto2.frenar();

		System.out.println("-----------------------Imvocando a los metodos de la clase persona-------------");
		System.out.println("--------------------------Objeto p1 --------------");
		p1.caminar(" Puerto Maderos");
		p1.correr();
		p1.estudiar(" Prueba De Sistemas");
		p1.hacerTrabajosPracticos(3);

		System.out.println("--------------------------Objeto p2 --------------");
		p2.caminar(" Parque Lezama");
		p2.correr();
		p2.estudiar(" Analisis Matematico");
		p2.hacerTrabajosPracticos(2);

		System.out.println("*****FIN DE LA APP****");

	}

}
