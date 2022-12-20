use std::io::stdin;

fn main() {
    let mut snum = String::new();
    stdin().read_line(&mut snum).expect("io error");

    let mut snums = String::new();
    stdin().read_line(&mut snums).expect("io err");
    let nums: Vec<f32> = snums.split_whitespace()
        .map(|x| x.parse().expect("nan"))
        .collect();
    let mut count = 0;
    for n in nums {
        if n >= 80.0 {
            count += 1;
        }
    }
    println!("{}", count);
}
