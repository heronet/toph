use std::io::stdin;

fn is_prime(n: u32) -> bool {
    if n <= 1 {
        return false;
    }
    for a in 2..n {
        if n % a == 0 {
            return false; 
        }
    }
    true 
}

fn main() {
    let mut s_num = String::new();
    stdin().read_line(&mut s_num).expect("Error");
    let num = s_num.trim().parse::<u32>().expect("NaN");
    let prime: bool = is_prime(num);

    if prime {
        println!("NO PUNISHMENT");
    } else {
        for _ in 0..num {
            println!("I DID NOT DO THE ASSIGNMENT.");
        }
    }

}
