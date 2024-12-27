import random

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def generate_test_case(case_number, n):
    input_filename = f"{case_number}.in"
    output_filename = f"{case_number}.out"

    with open(input_filename, 'w') as infile:
        infile.write(f"{n}\n")
        for i in range(n):
            numero = random.randint(1, 1000000)
            infile.write(f"{numero}\n")

    with open(output_filename, 'w') as outfile:
        with open(input_filename, 'r') as infile:
            infile.readline()
            for line in infile:
                numero = int(line.strip())
                outfile.write("Sim\n" if is_prime(numero) else "Nao\n")

num_cases = int(input("Qual o número de casos de teste: "))
for i in range(1, num_cases + 1):
    n = int(input(f"Quantas verificações de primos no teste {i}? "))
    generate_test_case(i, n)

print("\nArquivos gerados com sucesso!")
