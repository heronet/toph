use std::io;

fn main() {
    let mut text = String::new();
    io::stdin().read_line(&mut text).expect("IO Error");
    let rev = text.trim().chars().rev().collect::<String>();
    println!("{}", rev);
}
