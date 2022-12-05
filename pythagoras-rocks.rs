use std::io::stdin;

fn main() {
    let mut sides = String::new();
    stdin().read_line(&mut sides).expect("Error");
    let nums = sides.split_whitespace()
        .map(|x| x.parse::<i32>().expect("NaN"))
        .collect::<Vec<i32>>();
    let max: &i32 = nums.iter().max().expect("Error");
    println!("{}", max);
}
