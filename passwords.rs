use std::io::{self, BufRead};

fn main() {
   //let mut input = String::new();
   let stdin = io::stdin();
   for line in stdin.lock().lines() {
        let input = line.unwrap();
        let mut password_count = 0;
        let mut up = false;
        let mut low = false;
        let mut dig = false;

        for i in 0..input.len() {
            if input.chars().nth(i).unwrap().is_uppercase() {
                up = true;
            }
            else if input.chars().nth(i).unwrap().is_lowercase() {
                low = true;
            }
            else if input.chars().nth(i).unwrap().is_digit(10) {
                dig = true;
            }
            if up && low && dig {
                up = false;
                low = false;
                dig = false;
                password_count += 1;
            }
        }
        println!("{}", password_count);
    }
}
