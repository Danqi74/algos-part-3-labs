fn main() {
    // Масив із 43 дійсними числами
    let array: [f64; 43] = [
        -3.1, 1.2, -5.5, 3.4, 2.1, -0.7, -4.2, 0.5, 6.3, -1.8,  
        4.4, -9.9, 3.3, -2.2, -7.1, 5.5, 1.1, -0.3, 0.0, 2.2,   
        -6.5, -8.8, 7.7, 8.8, 9.9, -3.7, 4.0, 6.6, -1.0, 3.0,   
        -2.5, -0.8, 5.9, 3.3, 2.2, -4.4, 8.1, 6.9, -7.0, -1.3,  
        -2.0, 3.5, -5.2                                         
    ];

    // Знаходження найбільшого та найменшого від'ємних елементів
    let mut max_neg = f64::MIN;
    let mut min_neg = f64::MAX;
    let mut max_index = None;
    let mut min_index = None;

    for (i, &val) in array.iter().enumerate() {
        if val < 0.0 {
            if val > max_neg {
                max_neg = val;
                max_index = Some(i);
            }
            if val < min_neg {
                min_neg = val;
                min_index = Some(i);
            }
        }
    }

    // Перевірка, чи є від'ємні елементи
    if max_index.is_none() || min_index.is_none() {
        println!("Масив не має від'ємних елементів.");
        return;
    }

    let max_index = max_index.unwrap();
    let min_index = min_index.unwrap();

    // Визначення діапазону між мінімальним і максимальним
    let (start, end) = if max_index < min_index {
        (max_index + 1, min_index)
    } else {
        (min_index + 1, max_index)
    };

    // Обчислення суми кубів елементів між індексами
    let sum_of_cubes: f64 = array[start..end].iter().map(|&x| x.powi(3)).sum();

    println!("Сума кубів елементів між найбільшим ({}) і найменшим ({}) від'ємними елементами: {:.6}", max_neg, min_neg, sum_of_cubes);
}
