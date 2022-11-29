use std::io::{stdin};

fn main() {
    let mut s_num = String::new();
    stdin().read_line(&mut s_num).expect("Input error");
    let num: i32 = s_num.trim().parse().expect("Perse Error");

    let mut s_costs = String::new();
    stdin().read_line(&mut s_costs).expect("Input Error"); 
    let costs: Vec<i32> = s_costs.split_whitespace()
        .map(|x| x.parse().expect("Parse error"))
        .collect();
    let min = costs.iter().min().unwrap();
    let output = if (num - min) >= 10 { "Yes :-D" } else { "No :-(" };
    println!("{}", output);
}
