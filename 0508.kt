fun main() {
    print("첫 번째 정수를 입력하세요: ")
    val num1 = readLine()!!.toInt()
    print("두 번째 정수를 입력하세요: ")
    val num2 = readLine()!!.toInt()
    print("연산 종류를 입력하세요 (+, -, *, /): ")
    val operator = readLine()

    val result = when (operator) {
        "+" -> num1 + num2
        "-" -> num1 - num2
        "*" -> num1 * num2
        "/" -> num1 / num2
        else -> print("잘못된 입력입니다.")
    }
    print("$num1 $operator $num2 = $result")
}
