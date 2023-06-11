class Person(name: String, age: Int) {
    var personName: String = name
    var personAge: Int = age
    fun introduce() {
        println("이름은 ${personName}이고, ${personAge}살입니다.")
    }
}

fun main() {
    val person = Person("김성래", 17)
    person.introduce()
}