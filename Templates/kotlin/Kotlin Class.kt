class Person(private val name: String) {
    fun greet() {
        println("Hello, $name!")
    }
}

fun main() {
    val person = Person("User")
    person.greet()
}

