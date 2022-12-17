use std::io;

fn main() {
    let mut s_nums = String::new();
    io::stdin().read_line(&mut s_nums).expect("IO Error");
    let nums: Vec<f32> = s_nums.split_whitespace()
        .map(|x| x.parse().expect("NaN"))
        .collect();
    let angle = (30.0 * nums[0]) - (5.5 * nums[1]);
    let min_angle = if 360.0 - angle > angle {
        angle
    } else {
        360.0 - angle
    };
    println!("{:.5}", min_angle);
}
