use std::io::stdin;

fn main() {
    let mut s_prices = String::new();
    stdin().read_line(&mut s_prices).expect("Error Input");

    let prices: Vec<i32> = s_prices.split_whitespace()
        .map(|x| x.parse().expect("Error Parsing"))
        .collect();
    if ((prices[0] + prices[1]) % 2 != 0) || ((prices[0] + prices[2]) % 2 != 0) || ((prices[1] + prices[2]) % 2 != 0) {
        println!("3 Kimonos for Nezuko");
    } else {
        println!("You have to choose two");
    }
}
