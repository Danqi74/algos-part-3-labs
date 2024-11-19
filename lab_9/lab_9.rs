use std::f64;

// Функція для обчислення точного значення y(x)
fn exact_function(x: f64) -> f64 {
    0.5 * ((x + 1.0).abs() / (x - 1.0)).ln()
}

// Функція для обчислення ряду з n членами
fn series_expansion(x: f64, n: usize) -> f64 {
    let mut sum = 0.0;
    for i in 0..=n {
        let term = 1.0 / ((2 * i + 1) as f64 * x.powi(2 * i as i32 + 1));
        sum += term;
    }
    sum
}

// Функція для обчислення ряду з заданою точністю
fn series_with_precision(x: f64, epsilon: f64) -> f64 {
    let mut sum = 0.0;
    let mut term;
    let mut i = 0;

    loop {
        term = 1.0 / ((2 * i + 1) as f64 * x.powi(2 * i as i32 + 1));
        if term.abs() < epsilon {
            break;
        }
        sum += term;
        i += 1;
    }
    sum
}

fn main() {
    let mut input = String::new();

    let a = 1.0;
    let b = 2.0;
    
    // Введення кількості точок k
    println!("Введіть k (кількість точок):");
    std::io::stdin().read_line(&mut input).unwrap();
    let k: usize = input.trim().parse().unwrap();
    input.clear();

    let n = 5;

    let epsilon = 0.0001;
    let step = (b - a) / (k as f64 - 1.0);

    println!("\n x\tТочне y(x)\tРозклад (n членів)\tРозклад (точність)");

    for i in 0..k {
        let x = a + i as f64 * step;

        // Пропускаємо x = 1 (де ln стає невизначеним)
        if (x - 1.0).abs() < f64::EPSILON {
            continue;
        }

        // Обчислення точного значення
        let exact_y = exact_function(x);

        // Обчислення розкладу в ряд для заданого n
        let series_n = series_expansion(x, n);

        // Обчислення розкладу в ряд з заданою точністю
        let series_epsilon = series_with_precision(x, epsilon);

        // Вивід результатів
        println!(
            "{:.8}\t{:.8}\t\t{:.8}\t\t{:.8}",
            x, exact_y, series_n, series_epsilon
        );
    }
}
